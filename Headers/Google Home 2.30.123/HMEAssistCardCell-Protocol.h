//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HMEAssistCardCellDelegate, HMEAssistCardViewModel;

@protocol HMEAssistCardCell <NSObject>
+ (double)heightForObject:(id <HMEAssistCardViewModel>)arg1 constrainedToWidth:(double)arg2;
- (void)updateCellWithModel:(id <HMEAssistCardViewModel>)arg1;

@optional
@property(nonatomic) struct CGPoint collectionViewContentOffset;
@property(nonatomic) __weak id <HMEAssistCardCellDelegate> cardDelegate;
@end

