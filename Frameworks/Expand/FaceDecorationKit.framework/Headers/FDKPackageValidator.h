//
//  FDKPackageValidator.h
//  FaceDecorationKit
//
//  Created by Jackie on 2019/5/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FDKPackageValidator : NSObject

- (instancetype)initWithContentFilePath:(NSString *)path;

- (instancetype)initWithContentFilePath:(NSString *)path
                         VerifyJSONFile:(NSString *)verifyJSONName
                    verifySignatureFile:(NSString *)verifySignatureName;

- (BOOL)validateVerifyJSONWithKey:(NSString *)key;

@property (nonatomic, readonly) NSDictionary *verifyJSONDictionary;

- (BOOL)validatePackageFiles;

@end

NS_ASSUME_NONNULL_END
