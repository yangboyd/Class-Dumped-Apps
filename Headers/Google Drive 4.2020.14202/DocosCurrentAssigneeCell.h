//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GIPNetworkImageView, UILabel;
@protocol DocosCurrentAssigneeCellDelegate, DocosDiscussionAuthor;

@interface DocosCurrentAssigneeCell : UITableViewCell
{
    id <DocosCurrentAssigneeCellDelegate> _delegate;
    id <DocosDiscussionAuthor> _assignee;
    GIPNetworkImageView *_assigneeImg;
    UILabel *_assigneeLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) UILabel *assigneeLabel; // @synthesize assigneeLabel=_assigneeLabel;
@property(retain, nonatomic) GIPNetworkImageView *assigneeImg; // @synthesize assigneeImg=_assigneeImg;
@property(retain, nonatomic) id <DocosDiscussionAuthor> assignee; // @synthesize assignee=_assignee;
@property(nonatomic) __weak id <DocosCurrentAssigneeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateUI;
- (void)layoutSubviews;
- (void)resetForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end

