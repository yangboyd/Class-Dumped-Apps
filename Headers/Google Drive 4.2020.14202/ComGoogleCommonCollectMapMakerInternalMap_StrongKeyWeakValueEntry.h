//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectMapMakerInternalMap_AbstractStrongKeyEntry.h"

#import "ComGoogleCommonCollectMapMakerInternalMap_WeakValueEntry-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectMapMakerInternalMap_StrongKeyWeakValueEntry : ComGoogleCommonCollectMapMakerInternalMap_AbstractStrongKeyEntry <ComGoogleCommonCollectMapMakerInternalMap_WeakValueEntry>
{
    unsigned long long valueReference_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)getValueReference;
- (id)copy__WithJavaLangRefReferenceQueue:(id)arg1 withComGoogleCommonCollectMapMakerInternalMap_StrongKeyWeakValueEntry:(id)arg2;
- (void)setValueWithId:(id)arg1 withJavaLangRefReferenceQueue:(id)arg2;
- (void)clearValue;
- (id)getValue;
- (id)initWithId:(id)arg1 withInt:(int)arg2 withComGoogleCommonCollectMapMakerInternalMap_StrongKeyWeakValueEntry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

