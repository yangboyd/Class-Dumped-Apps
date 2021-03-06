//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>
#import <InstagramAppCoreFramework/IGTextViewItemViewModelProtocol-Protocol.h>

@class IGStyledString, NSString, UIColor;

@interface IGProOnboardingChecklistStepsCompletedTextViewModel : NSObject <IGListDiffable, IGTextViewItemViewModelProtocol>
{
    _Bool _shouldShowTopBottomSeparators;
    _Bool _shouldShowBadge;
    _Bool _shouldShowChevron;
    long long _completedSteps;
    long long _totalSteps;
}

@property(readonly, nonatomic) long long totalSteps; // @synthesize totalSteps=_totalSteps;
@property(readonly, nonatomic) long long completedSteps; // @synthesize completedSteps=_completedSteps;
- (id)_stringColor;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)_rawStringWithTotalStepsRange:(struct _NSRange *)arg1;
- (id)_baseStyle;
@property(readonly, nonatomic) _Bool shouldBadge;
@property(readonly, nonatomic) long long numberOfLinesOfTruncatedString;
@property(readonly, nonatomic) _Bool isAccessibilityLink;
@property(readonly, nonatomic) _Bool usePaddedTapDetection;
@property(readonly, nonatomic) _Bool enableAccessibilityLinks;
@property(readonly, nonatomic) _Bool showsTopSeparator;
@property(readonly, nonatomic) _Bool showsBottomSeparator;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets insets;
@property(readonly, nonatomic) IGStyledString *styledString;
- (id)initStepsCompletedViewModel:(id)arg1 isInviteFollowersStepCompletedByClient:(_Bool)arg2 isLearnFromOthersCompletedByClient:(_Bool)arg3 isProfileCompletionCompletedByClient:(_Bool)arg4 isInvitePostCompletedByClient:(_Bool)arg5 isFollowViaSumaCompletedByClient:(_Bool)arg6 isInviteFollowersViaMessengerCompletedByClient:(_Bool)arg7 shouldShowTopBottomSeparators:(_Bool)arg8 shouldShowBadge:(_Bool)arg9 shouldShowChevron:(_Bool)arg10;
- (id)initStepsCompletedViewModel:(id)arg1 shouldShowTopBottomSeparators:(_Bool)arg2 shouldShowBadge:(_Bool)arg3 shouldShowChevron:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

