//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCRoundedCellContentView, UIView;
@protocol SCGroupStoryGeofencePrivacyCellDelegate;

@interface SCGroupStoryGeofencePrivacyCell : UITableViewCell
{
    UIView *_containerView;
    UIView *_bottomBorder;
    SCRoundedCellContentView *_friendsView;
    SCRoundedCellContentView *_friendsOfFriendsView;
    long long _privacyType;
    id <SCGroupStoryGeofencePrivacyCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGroupStoryGeofencePrivacyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTapForPoint:(struct CGPoint)arg1;
- (_Bool)_tappedFriendsViewForPoint:(struct CGPoint)arg1;
- (void)_swapSelectedPrivacy;
- (void)_setupFriendsOfFriendsView;
- (void)_setupFriendsView;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

