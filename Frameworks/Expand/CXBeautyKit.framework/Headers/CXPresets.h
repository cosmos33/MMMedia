//
//  CXPresetFilterBundle.h
//  Pods
//
//  Created by Yu Ao on 05/02/2018.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//FOUNDATION_EXPORT  NSBundle * CXPresetFiltersBundle(void);

FOUNDATION_EXPORT   NSBundle * _Nullable  CXPresetMakeupsBundle(void);

FOUNDATION_EXPORT void CXOverrideCustomMakeupBundle(void);
FOUNDATION_EXPORT void CXOverrideCustomFilterBundle(void);

FOUNDATION_EXPORT void CXRemoveCustomMakeupBundle(void);
FOUNDATION_EXPORT void CXRemoveCustomFilterBundle(void);

NS_ASSUME_NONNULL_END
