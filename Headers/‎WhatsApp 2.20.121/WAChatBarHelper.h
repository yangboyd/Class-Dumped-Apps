//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol WAChatBarHelperDelegate;

@interface WAChatBarHelper : NSObject
{
    id <WAChatBarHelperDelegate> _delegate;
    NSArray *_menuPlugins;
}

+ (id)chatBarActionSheetPresenter;
+ (void)presentDocumentTooLargeAlertWithViewController:(id)arg1;
+ (void)sendDocumentAttachments:(id)arg1 toChatSession:(id)arg2 withAttachments:(id)arg3 openedFromURL:(_Bool)arg4 fromViewController:(id)arg5 preSendingBlock:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *menuPlugins; // @synthesize menuPlugins=_menuPlugins;
@property(nonatomic) __weak id <WAChatBarHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showMediaMenuWithChatSession:(id)arg1 inputView:(id)arg2;
- (id)initWithMenuPlugins:(id)arg1 inHostViewController:(id)arg2 delegate:(id)arg3;

@end

