//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC10SmartGlass24SGClubModerationBaseCell.h"

@class SGProfileHeader, UILabel, UIView;

@interface _TtC10SmartGlass27SGClubModerationCommentCell : _TtC10SmartGlass24SGClubModerationBaseCell
{
    // Error parsing type: , name: profileHeader
    // Error parsing type: , name: itemTextLabel
    // Error parsing type: , name: commentContainerView
    // Error parsing type: , name: commentMissingView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)goToCommentButtonPressed:(id)arg1;
- (void)updateDataContext:(id)arg1;
- (void)prepareForReuse;
@property(nonatomic, retain) UIView *commentMissingView; // @synthesize commentMissingView;
@property(nonatomic, retain) UIView *commentContainerView; // @synthesize commentContainerView;
@property(nonatomic, retain) UILabel *itemTextLabel; // @synthesize itemTextLabel;
@property(nonatomic, retain) SGProfileHeader *profileHeader; // @synthesize profileHeader;

@end

