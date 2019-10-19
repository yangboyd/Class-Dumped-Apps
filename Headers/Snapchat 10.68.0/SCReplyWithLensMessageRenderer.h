//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"

@class SCChatSDKActionContext, SCReplyWithLensChatStatusViewModel;

@interface SCReplyWithLensMessageRenderer : NSObject <SCChatMessageRenderer>
{
    SCReplyWithLensChatStatusViewModel *_viewModel;
    SCChatSDKActionContext *_actionContext;
}

@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void).cxx_destruct;
- (void)prepareContentViewForReuse:(id)arg1;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)willDisplayContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;
- (void)setupContentView:(id)arg1;
- (id)reuseIdentifier;
- (id)createContentView;
- (id)initWithMessage:(id)arg1 userIdentifier:(id)arg2 attributedStringProvider:(id)arg3;

@end

