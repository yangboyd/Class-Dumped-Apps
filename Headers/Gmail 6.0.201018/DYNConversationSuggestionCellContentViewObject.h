//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

#import "DYNContentViewObject-Protocol.h"
#import "DYNConversationSuggestionRepresentable-Protocol.h"

@class NSString;
@protocol DYNContentViewObjectActionDelegate, DYNConversationSuggestion, GILVisualElementParams, GIPAccountID;

@interface DYNConversationSuggestionCellContentViewObject : GOOBaseContentViewObject <DYNContentViewObject, DYNConversationSuggestionRepresentable>
{
    _Bool _isBeingValidated;
    int _visualElementID;
    id <DYNConversationSuggestion> _conversationSuggestion;
    id <GIPAccountID> _accountId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GIPAccountID> accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) id <DYNConversationSuggestion> conversationSuggestion; // @synthesize conversationSuggestion=_conversationSuggestion;
@property(nonatomic) int visualElementID; // @synthesize visualElementID=_visualElementID;
@property(nonatomic) _Bool isBeingValidated; // @synthesize isBeingValidated=_isBeingValidated;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)shouldShowInkView;
@property(retain, nonatomic) Class contentViewClass;

// Remaining properties
@property(nonatomic) __weak id <DYNContentViewObjectActionDelegate> actionDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <GILVisualElementParams> visualElementParams;

@end

