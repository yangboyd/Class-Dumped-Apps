//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FNodeFilter;

@interface FViewProcessor : NSObject
{
    id <FNodeFilter> _filter;
}

+ (_Bool)cache:(id)arg1 hasChild:(id)arg2;
@property(retain, nonatomic) id <FNodeFilter> filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)listenCompleteOldCache:(id)arg1 path:(id)arg2 writesCache:(id)arg3 serverCache:(id)arg4 accumulator:(id)arg5;
- (id)revertUserWriteOn:(id)arg1 path:(id)arg2 writesCache:(id)arg3 completeCache:(id)arg4 accumulator:(id)arg5;
- (id)ackUserWriteOn:(id)arg1 ackPath:(id)arg2 affectedTree:(id)arg3 writesCache:(id)arg4 completeCache:(id)arg5 accumulator:(id)arg6;
- (id)applyServerMergeTo:(id)arg1 path:(id)arg2 changedChildren:(id)arg3 writesCache:(id)arg4 completeCache:(id)arg5 filterServerNode:(_Bool)arg6 accumulator:(id)arg7;
- (id)applyUserMergeTo:(id)arg1 path:(id)arg2 changedChildren:(id)arg3 writesCache:(id)arg4 completeCache:(id)arg5 accumulator:(id)arg6;
- (id)applyUserOverwriteTo:(id)arg1 changePath:(id)arg2 changedSnap:(id)arg3 writesCache:(id)arg4 completeCache:(id)arg5 accumulator:(id)arg6;
- (id)applyServerOverwriteTo:(id)arg1 changePath:(id)arg2 snap:(id)arg3 writesCache:(id)arg4 completeCache:(id)arg5 filterServerNode:(_Bool)arg6 accumulator:(id)arg7;
- (id)generateEventCacheAfterServerEvent:(id)arg1 path:(id)arg2 writesCache:(id)arg3 source:(id)arg4 accumulator:(id)arg5;
- (id)maybeAddValueFromOldViewCache:(id)arg1 newViewCache:(id)arg2 changes:(id)arg3;
- (id)applyOperationOn:(id)arg1 operation:(id)arg2 writesCache:(id)arg3 completeCache:(id)arg4;
- (id)initWithFilter:(id)arg1;

@end

