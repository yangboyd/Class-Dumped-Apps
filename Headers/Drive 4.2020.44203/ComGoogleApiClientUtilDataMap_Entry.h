//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilMap_Entry-Protocol.h"

@class ComGoogleApiClientUtilDataMap, ComGoogleApiClientUtilFieldInfo, NSString;

@interface ComGoogleApiClientUtilDataMap_Entry : NSObject <JavaUtilMap_Entry>
{
    ComGoogleApiClientUtilDataMap *this$0_;
    id fieldValue_;
    ComGoogleApiClientUtilFieldInfo *fieldInfo_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)setValueWithId:(id)arg1;
- (id)getValue;
- (id)getKey;
- (id)initWithComGoogleApiClientUtilDataMap:(id)arg1 withComGoogleApiClientUtilFieldInfo:(id)arg2 withId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

