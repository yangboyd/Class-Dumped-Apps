//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectSynchronized_SynchronizedObject.h"

#import "JavaUtilMap_Entry-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectSynchronized_SynchronizedEntry : ComGoogleCommonCollectSynchronized_SynchronizedObject <JavaUtilMap_Entry>
{
}

- (id)setValueWithId:(id)arg1;
- (id)getValue;
- (id)getKey;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

