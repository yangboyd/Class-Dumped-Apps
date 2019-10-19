//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

#import "GHKChatQueueContentViewObject-Protocol.h"

@class NSString;
@protocol GHKChatQueueContentViewDelegate;

@interface GHKChatQueueContentViewObjectGM2 : GOOBaseContentViewObject <GHKChatQueueContentViewObject>
{
    id <GHKChatQueueContentViewDelegate> _delegate;
    long long _queuePosition;
    NSString *_productName;
}

@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) long long queuePosition; // @synthesize queuePosition=_queuePosition;
@property(nonatomic) __weak id <GHKChatQueueContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewObject;
- (void)announceQueuePositionDelayed;
- (Class)contentViewClass;
- (id)initWithQueuePosition:(long long)arg1 productName:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

