//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

#import "ObjectObserverProtocol-Protocol.h"

@class BaseButton, BaseLabel, BaseView, ChatAvatarImageView, Contact, NSString, RedditService;

@interface ChatUserListCollectionCell : BaseCollectionViewCell <ObjectObserverProtocol>
{
    _Bool _enableSelection;
    _Bool _enableBlockedStatus;
    double _verticalPadding;
    Contact *_contact;
    BaseLabel *_headerLabel;
    BaseLabel *_detailLabel;
    BaseLabel *_statusLabel;
    BaseLabel *_reportCountLabel;
    ChatAvatarImageView *_avatarImageView;
    BaseButton *_selectionButton;
    BaseView *_onlineCircle;
    unsigned long long _reportCount;
    NSString *_detailText;
}

@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) unsigned long long reportCount; // @synthesize reportCount=_reportCount;
@property(nonatomic) _Bool enableBlockedStatus; // @synthesize enableBlockedStatus=_enableBlockedStatus;
@property(retain, nonatomic) BaseView *onlineCircle; // @synthesize onlineCircle=_onlineCircle;
@property(retain, nonatomic) BaseButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(retain, nonatomic) ChatAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) BaseLabel *reportCountLabel; // @synthesize reportCountLabel=_reportCountLabel;
@property(retain, nonatomic) BaseLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) BaseLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) BaseLabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool enableSelection; // @synthesize enableSelection=_enableSelection;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
- (void).cxx_destruct;
- (void)updateContentViewsForData:(id)arg1;
@property(readonly, nonatomic) RedditService *service;
- (_Bool)shouldMarkNFSW;
- (void)configureStatusLabel;
- (void)setMainLabelBold:(_Bool)arg1;
- (void)configureWithMainText:(id)arg1 andDetailText:(id)arg2;
- (void)configureWithContact:(id)arg1 withDetailText:(id)arg2 withReportCount:(unsigned long long)arg3 enableBlockedStatus:(_Bool)arg4;
- (void)configureWithContact:(id)arg1 enableBlockedStatus:(_Bool)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

