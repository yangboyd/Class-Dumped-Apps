//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonFlagsDocLevel, NSString;

@interface ComGoogleCommonFlagsFlagDescription_Builder : NSObject
{
    NSString *containerClassName_;
    NSString *simpleFieldName_;
    NSString *shortFlagName_;
    NSString *type_;
    NSString *doc_;
    ComGoogleCommonFlagsDocLevel *docLevel_;
    NSString *altName_;
    _Bool isDeprecated_;
}

- (void)dealloc;
- (id)build;
- (id)isDeprecatedWithBoolean:(_Bool)arg1;
- (id)docLevelWithComGoogleCommonFlagsDocLevel:(id)arg1;
- (id)altNameWithNSString:(id)arg1;
- (id)docWithNSString:(id)arg1;
- (id)typeWithNSString:(id)arg1;
- (id)shortFlagNameWithNSString:(id)arg1;

@end

