//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MGFStringLocator : NSObject
{
}

+ (id)bundleInAppBundle:(id)arg1;
+ (id)languageOnly:(id)arg1;
+ (id)getSharedUserDefaults;
+ (id)appLocaleIdentifier;
+ (id)preferredLocaleIdentifier;
+ (id)localizedStringWithDefaultValue:(id)arg1 file:(id)arg2 bundle:(id)arg3 missingValue:(id)arg4 comment:(id)arg5;
+ (id)MGFResourceFileNameInBundleForLocale:(id)arg1;
+ (id)valueForString:(id)arg1 withDefault:(id)arg2;

@end

