//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSLayoutConstraint, QTMButton, SKTContact, SKTNetworkSingleImageView, UIButton, UILabel;

@interface SKTChipDetailViewController : UIViewController
{
    id <SKTChipDetailControllerDelegate> _delegate;
    UILabel *_nameLabel;
    UILabel *_contactDetailsLabel;
    SKTNetworkSingleImageView *_avatarView;
    UIButton *_removeButton;
    QTMButton *_hideDisplayNameButton;
    NSLayoutConstraint *_hideDisplayNameButtonHeight;
    SKTContact *_contact;
    id <SKTSelectedContactsDisplayOptions> _displayOptions;
    id <SKTInteractionLogger> _interactionLogger;
}

@property(readonly, nonatomic) id <SKTInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SKTSelectedContactsDisplayOptions> displayOptions; // @synthesize displayOptions=_displayOptions;
@property(retain, nonatomic) SKTContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak NSLayoutConstraint *hideDisplayNameButtonHeight; // @synthesize hideDisplayNameButtonHeight=_hideDisplayNameButtonHeight;
@property(nonatomic) __weak QTMButton *hideDisplayNameButton; // @synthesize hideDisplayNameButton=_hideDisplayNameButton;
@property(nonatomic) __weak UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak SKTNetworkSingleImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak UILabel *contactDetailsLabel; // @synthesize contactDetailsLabel=_contactDetailsLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <SKTChipDetailControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideDisplayNameState:(id)arg1;
- (void)removeContactFromRecipients:(id)arg1;
@property(readonly, nonatomic) struct CGSize fullContentSize;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 displayOptions:(id)arg2 analyticsProvider:(id)arg3;

@end

