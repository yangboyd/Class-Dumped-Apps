//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRecipientCellViewModelProtocol-Protocol.h>
#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class IGDirectShareSheetOneTapButtonViewModel, IGImageTitleSubtitleViewModel, IGUser, NSString, UIColor;

@interface IGDirectRecipientStoryCellViewModel : NSObject <IGListDiffable, IGDirectRecipientCellViewModelProtocol>
{
    IGImageTitleSubtitleViewModel *_subviewModel;
    IGDirectShareSheetOneTapButtonViewModel *_oneTapViewModel;
    _Bool _isSelected;
    _Bool _isEnabled;
    UIColor *_backgroundColor;
    _Bool _canEditBlocklist;
    _Bool _canShareToFbWithOneTap;
    _Bool _willShareToFbWithOneTap;
    IGUser *_user;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool willShareToFbWithOneTap; // @synthesize willShareToFbWithOneTap=_willShareToFbWithOneTap;
@property(readonly, nonatomic) _Bool canShareToFbWithOneTap; // @synthesize canShareToFbWithOneTap=_canShareToFbWithOneTap;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)recipientTargetType;
- (id)accessoryViewImage;
- (double)separatorRightInset;
- (double)separatorLeftInset;
- (double)cellHeightForConstrainingSize:(struct CGSize)arg1;
- (id)backgroundColor;
- (unsigned long long)subtitleAccessoryType;
- (_Bool)showLoadingIndicatorAccessoryView;
- (long long)buttonType;
- (_Bool)showDottedCircleAccessoryView;
- (_Bool)isEnabled;
- (_Bool)isSelected;
- (id)oneTapViewModel;
- (id)subviewModel;
- (id)initWithUser:(id)arg1 layoutSpec:(id)arg2 isSelected:(_Bool)arg3 isEnabled:(_Bool)arg4 backgroundColor:(id)arg5 oneTapButtonViewModel:(id)arg6 canShareToFbWithOneTap:(_Bool)arg7 willShareToFbWithOneTap:(_Bool)arg8 canEditBlocklist:(_Bool)arg9 totalBlocklistCount:(unsigned long long)arg10 module:(id)arg11 shouldUseDoubleStoryAvatar:(_Bool)arg12 shouldUseBlueSubtitleText:(_Bool)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

