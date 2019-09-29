/*
 FDKCocoaSecurity  1.1

 Created by Kelp on 12/5/12.
 Copyright (c) 2012 Kelp http://kelp.phate.org/
 MIT License
 
 FDKCocoaSecurity is core. It provides AES encrypt, AES decrypt, Hash(MD5, HmacMD5, SHA1~SHA512, HmacSHA1~HmacSHA512) messages.
*/

#import <Foundation/Foundation.h>

#pragma mark - CocoaSecurityResult
@interface FDKCocoaSecurityResult : NSObject

@property (strong, nonatomic, readonly) NSData *data;
@property (strong, nonatomic, readonly) NSString *utf8String;
@property (strong, nonatomic, readonly) NSString *hex;
@property (strong, nonatomic, readonly) NSString *hexLower;
@property (strong, nonatomic, readonly) NSString *base64;

- (id)initWithBytes:(unsigned char[])initData length:(NSUInteger)length;

@end


#pragma mark - CocoaSecurity
@interface FDKCocoaSecurity : NSObject
#pragma mark - AES Encrypt
+ (FDKCocoaSecurityResult *)aesEncrypt:(NSString *)data key:(NSString *)key;
+ (FDKCocoaSecurityResult *)aesEncrypt:(NSString *)data hexKey:(NSString *)key hexIv:(NSString *)iv;
+ (FDKCocoaSecurityResult *)aesEncrypt:(NSString *)data key:(NSData *)key iv:(NSData *)iv;
+ (FDKCocoaSecurityResult *)aesEncryptWithData:(NSData *)data key:(NSData *)key iv:(NSData *)iv;
#pragma mark AES Decrypt
+ (FDKCocoaSecurityResult *)aesDecryptWithBase64:(NSString *)data key:(NSString *)key;
+ (FDKCocoaSecurityResult *)aesDecryptWithBase64:(NSString *)data hexKey:(NSString *)key hexIv:(NSString *)iv;
+ (FDKCocoaSecurityResult *)aesDecryptWithBase64:(NSString *)data key:(NSData *)key iv:(NSData *)iv;
+ (FDKCocoaSecurityResult *)aesDecryptWithData:(NSData *)data key:(NSData *)key iv:(NSData *)iv;

#pragma mark - MD5
+ (FDKCocoaSecurityResult *)md5:(NSString *)hashString;
+ (FDKCocoaSecurityResult *)md5WithData:(NSData *)hashData;
#pragma mark HMAC-MD5
+ (FDKCocoaSecurityResult *)hmacMd5:(NSString *)hashString hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacMd5WithData:(NSData *)hashData hmacKey:(NSString *)key;

#pragma mark - SHA
+ (FDKCocoaSecurityResult *)sha1:(NSString *)hashString;
+ (FDKCocoaSecurityResult *)sha1WithData:(NSData *)hashData;
+ (FDKCocoaSecurityResult *)sha224:(NSString *)hashString;
+ (FDKCocoaSecurityResult *)sha224WithData:(NSData *)hashData;
+ (FDKCocoaSecurityResult *)sha256:(NSString *)hashString;
+ (FDKCocoaSecurityResult *)sha256WithData:(NSData *)hashData;
+ (FDKCocoaSecurityResult *)sha384:(NSString *)hashString;
+ (FDKCocoaSecurityResult *)sha384WithData:(NSData *)hashData;
+ (FDKCocoaSecurityResult *)sha512:(NSString *)hashString;
+ (FDKCocoaSecurityResult *)sha512WithData:(NSData *)hashData;
#pragma mark HMAC-SHA
+ (FDKCocoaSecurityResult *)hmacSha1:(NSString *)hashString hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha1WithData:(NSData *)hashData hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha224:(NSString *)hashString hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha224WithData:(NSData *)hashData hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha256:(NSString *)hashString hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha256WithData:(NSData *)hashData hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha384:(NSString *)hashString hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha384WithData:(NSData *)hashData hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha512:(NSString *)hashString hmacKey:(NSString *)key;
+ (FDKCocoaSecurityResult *)hmacSha512WithData:(NSData *)hashData hmacKey:(NSString *)key;
@end


#pragma mark - CocoaSecurityEncoder
@interface FDKCocoaSecurityEncoder : NSObject
- (NSString *)base64:(NSData *)data;
- (NSString *)hex:(NSData *)data useLower:(BOOL)isOutputLower;
@end


#pragma mark - CocoaSecurityDecoder
@interface FDKCocoaSecurityDecoder : NSObject
- (NSData *)base64:(NSString *)data;
- (NSData *)hex:(NSString *)data;
@end
