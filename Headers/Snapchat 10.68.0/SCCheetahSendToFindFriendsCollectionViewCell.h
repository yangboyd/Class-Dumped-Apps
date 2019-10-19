//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

#import "SCActionable-Protocol.h"

@class NSString, SCActionModel, SCButton, UILabel;
@protocol SCActionHandling;

@interface SCCheetahSendToFindFriendsCollectionViewCell : SCSearchCollectionViewCell <SCActionable>
{
    UILabel *_textLabel;
    SCButton *_findFriendsButton;
    SCActionModel *_tapActionModel;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)setViewModel:(id)arg1;
- (id)viewModel;
- (void).cxx_destruct;
- (void)_findFriendsButtonClicked;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

