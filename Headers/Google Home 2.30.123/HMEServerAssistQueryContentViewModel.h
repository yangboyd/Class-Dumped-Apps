//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEServerAssistCardButtonsViewModel-Protocol.h"
#import "HMEServerAssistCardViewModel-Protocol.h"

@class GHCAssistCard, HMEServerAssistCardAction, NSArray, NSString, NSURL;
@protocol HMEAssistCardViewModelDelegate;

@interface HMEServerAssistQueryContentViewModel : NSObject <HMEServerAssistCardViewModel, HMEServerAssistCardButtonsViewModel>
{
    _Bool _dismissable;
    _Bool _hidden;
    _Bool _subtitleStyleItalic;
    id <HMEAssistCardViewModelDelegate> _cardObjectDelegate;
    NSString *_cardID;
    unsigned long long _cardRank;
    NSString *_categoryTitle;
    NSURL *_categoryIconURL;
    NSArray *_overflowActionCards;
    HMEServerAssistCardAction *_mainAction;
    HMEServerAssistCardAction *_alternateAction;
    NSURL *_iconImageURL;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_queries;
    GHCAssistCard *_assistCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GHCAssistCard *assistCard; // @synthesize assistCard=_assistCard;
@property(copy, nonatomic) NSArray *queries; // @synthesize queries=_queries;
@property(nonatomic, getter=isSubtitleStyleItalic) _Bool subtitleStyleItalic; // @synthesize subtitleStyleItalic=_subtitleStyleItalic;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *iconImageURL; // @synthesize iconImageURL=_iconImageURL;
@property(readonly, nonatomic) HMEServerAssistCardAction *alternateAction; // @synthesize alternateAction=_alternateAction;
@property(readonly, nonatomic) HMEServerAssistCardAction *mainAction; // @synthesize mainAction=_mainAction;
@property(copy, nonatomic) NSArray *overflowActionCards; // @synthesize overflowActionCards=_overflowActionCards;
@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) _Bool dismissable; // @synthesize dismissable=_dismissable;
@property(readonly, nonatomic) NSURL *categoryIconURL; // @synthesize categoryIconURL=_categoryIconURL;
@property(readonly, copy, nonatomic) NSString *categoryTitle; // @synthesize categoryTitle=_categoryTitle;
@property(readonly, nonatomic) unsigned long long cardRank; // @synthesize cardRank=_cardRank;
@property(readonly, copy, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
@property(nonatomic) __weak id <HMEAssistCardViewModelDelegate> cardObjectDelegate; // @synthesize cardObjectDelegate=_cardObjectDelegate;
- (void)logAnalyticsEventWithEventType:(int)arg1 queryStringHorizontalIndex:(unsigned long long)arg2;
- (void)assistCardCellDidTapOverflowMenuWithActionSheetController:(id)arg1;
- (void)assistCardCellDidTapDismiss;
- (void)assistCardCellDidTapAlternateAction;
- (void)assistCardCellDidTapMainAction;
- (id)analyticEventWithUserActionType:(int)arg1;
- (void)logAnalyticsEvent:(id)arg1 analyticsLogger:(id)arg2;
- (double)heightForWidth:(double)arg1;
- (id)cellIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAssistCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

