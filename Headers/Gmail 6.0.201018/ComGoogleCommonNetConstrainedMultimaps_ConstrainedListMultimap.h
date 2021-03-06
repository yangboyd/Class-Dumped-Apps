//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingListMultimap.h"

#import "ComGoogleCommonCollectListMultimap-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol ComGoogleCommonCollectListMultimap;

@interface ComGoogleCommonNetConstrainedMultimaps_ConstrainedListMultimap : ComGoogleCommonCollectForwardingListMultimap <ComGoogleCommonCollectListMultimap, JavaIoSerializable>
{
    id <ComGoogleCommonCollectListMultimap> delegate_;
    unsigned long long entries_;
    unsigned long long asMap_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (_Bool)putAllWithComGoogleCommonCollectMultimap:(id)arg1;
- (_Bool)putAllWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (_Bool)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (id)entries;
- (id)asMap;
- (id)delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

