//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTCellControllerProtocol-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"

@class NSString;

@interface YTSubscriptionProductCellController : YTInnerTubeCellController <YTPageStyleProvider, YTCellControllerProtocol>
{
}

@property(readonly, nonatomic) long long pageStyle;
- (void)handleLongPressBegan:(id)arg1;
- (void)handleAction:(id)arg1;
- (void)setCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

