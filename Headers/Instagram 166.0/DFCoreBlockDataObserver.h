//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/DFCoreDataObserver.h>

@interface DFCoreBlockDataObserver : DFCoreDataObserver
{
    CDUnknownBlockType _receivedDataBlock;
}

- (void).cxx_destruct;
- (void)didReceiveData:(id)arg1;
- (id)initWithReceivedDataBlockPerformedSynchronously:(CDUnknownBlockType)arg1;
- (id)initWithReceivedDataBlock:(CDUnknownBlockType)arg1 performedOnQueue:(id)arg2;
- (id)initWithReceivedDataBlock:(CDUnknownBlockType)arg1;

@end

