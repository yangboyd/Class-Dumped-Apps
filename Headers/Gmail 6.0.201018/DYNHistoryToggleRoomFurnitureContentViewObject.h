//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

#import "DYNContentViewObject-Protocol.h"
#import "DYNMessageAssociable-Protocol.h"

@class NSString;
@protocol DYNContentViewObjectActionDelegate, DYNMessage, GILVisualElementParams;

@interface DYNHistoryToggleRoomFurnitureContentViewObject : GOOBaseContentViewObject <DYNContentViewObject, DYNMessageAssociable>
{
    _Bool _isFirstMessage;
    _Bool _textForcedItalic;
    unsigned int _historyState;
    id <DYNMessage> _message;
    NSString *_creatorFirstName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool textForcedItalic; // @synthesize textForcedItalic=_textForcedItalic;
@property(nonatomic) unsigned int historyState; // @synthesize historyState=_historyState;
@property(retain, nonatomic) NSString *creatorFirstName; // @synthesize creatorFirstName=_creatorFirstName;
@property(nonatomic) _Bool isFirstMessage; // @synthesize isFirstMessage=_isFirstMessage;
@property(retain, nonatomic) id <DYNMessage> message; // @synthesize message=_message;
- (_Bool)isEqualToHistoryToggleFurnitureContentViewObject:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (_Bool)shouldShowInkView;
@property(retain, nonatomic) Class contentViewClass;
- (id)initWithMessage:(id)arg1;
- (id)initWithState:(unsigned int)arg1;

// Remaining properties
@property(nonatomic) __weak id <DYNContentViewObjectActionDelegate> actionDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(nonatomic) int visualElementID;
@property(retain, nonatomic) id <GILVisualElementParams> visualElementParams;

@end

