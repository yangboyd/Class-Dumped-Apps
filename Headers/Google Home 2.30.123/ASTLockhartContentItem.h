//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTAutoResizingWebViewDelegate-Protocol.h"
#import "ASTContentItem-Protocol.h"

@class ASTAssistantPlateCardContext, ASTAutoResizingWebView, NSString;
@protocol ASTContentItemDelegate;

@interface ASTLockhartContentItem : NSObject <ASTAutoResizingWebViewDelegate, ASTContentItem>
{
    id <ASTContentItemDelegate> _delegate;
    NSString *_htmlBody;
    NSString *_queryString;
    ASTAutoResizingWebView *_contentView;
    ASTAssistantPlateCardContext *_context;
    ASTAutoResizingWebView *_webView;
    struct UIEdgeInsets _margin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASTAutoResizingWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) ASTAssistantPlateCardContext *context; // @synthesize context=_context;
@property(retain, nonatomic) ASTAutoResizingWebView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSString *htmlBody; // @synthesize htmlBody=_htmlBody;
@property(nonatomic) __weak id <ASTContentItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
- (void)resizingWebViewDidRequestToOpenURL:(id)arg1 navigationType:(long long)arg2;
- (void)didResizeTo:(struct CGSize)arg1;
- (double)estimatedHeightForWidth:(double)arg1;
- (id)contentData;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset;
- (void)parseProtoData:(id)arg1;
- (void)dealloc;
- (id)initWithProtoData:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

