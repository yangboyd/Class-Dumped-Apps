//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaLangThrowable;

@interface DalvikSystemCloseGuard : NSObject
{
    JavaLangThrowable *allocationSite_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getTracker;
+ (void)setTrackerWithDalvikSystemCloseGuard_Tracker:(id)arg1;
+ (id)getReporter;
+ (void)setReporterWithDalvikSystemCloseGuard_Reporter:(id)arg1;
+ (_Bool)isEnabled;
+ (void)setEnabledWithBoolean:(_Bool)arg1;
+ (id)get;
- (void)dealloc;
- (void)warnIfOpen;
- (void)close;
- (void)openWithNSString:(id)arg1;
- (id)init;

@end

