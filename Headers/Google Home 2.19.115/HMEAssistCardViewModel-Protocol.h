//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAssistCardCellDelegate-Protocol.h"

@class NSString;
@protocol HMEAssistCardViewModelDelegate;

@protocol HMEAssistCardViewModel <HMEAssistCardCellDelegate>
@property(nonatomic) __weak id <HMEAssistCardViewModelDelegate> cardObjectDelegate;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool dismissable;
@property(readonly, copy, nonatomic) NSString *categoryTitle;
@property(readonly, nonatomic) unsigned long long cardRank;
- (NSString *)cellIdentifier;
- (double)heightForWidth:(double)arg1;
@end

