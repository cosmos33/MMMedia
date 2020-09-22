//
//  CXMakeupResourceCache.h
//  Pods
//
//  Created by Yu Ao on 02/02/2018.
//

#import <Foundation/Foundation.h>
#import "CXMakeup.h"

@interface CXMakeupResourceCache : NSObject

@property (nonatomic, class, readonly) CXMakeupResourceCache *sharedCache;

@property (nonatomic) CFTimeInterval expireAge; //Default is 5s.

- (void)setResource:(id)resource forLayer:(CXMakeupLayer *)layer;

- (id)resourceForLayer:(CXMakeupLayer *)layer;

@end
