//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

#import <drive_extension_framework/GHKChatMessageContentViewObject-Protocol.h>

@class GHKChatMessageData, NSString;
@protocol GHKChatMessageContentViewDelegate;

@interface GHKChatMessageContentViewObjectGM2 : GOOBaseContentViewObject <GHKChatMessageContentViewObject>
{
    _Bool _enableSurveyButton;
    _Bool _firstInGroup;
    _Bool _lastInGroup;
    GHKChatMessageData *_data;
    id <GHKChatMessageContentViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool lastInGroup; // @synthesize lastInGroup=_lastInGroup;
@property(nonatomic) _Bool firstInGroup; // @synthesize firstInGroup=_firstInGroup;
@property(nonatomic) _Bool enableSurveyButton; // @synthesize enableSurveyButton=_enableSurveyButton;
@property(nonatomic) __weak id <GHKChatMessageContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GHKChatMessageData *data; // @synthesize data=_data;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (Class)contentViewClass;
- (id)initWithMessageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

