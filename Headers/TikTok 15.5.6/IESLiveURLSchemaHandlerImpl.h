//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveURLSchemaHandler-Protocol.h"

@class IESLiveSchemaParserFactory, NSMutableArray, NSString;
@protocol IESLiveCJPayService, IESLiveOpenURL;

@interface IESLiveURLSchemaHandlerImpl : NSObject <IESLiveURLSchemaHandler>
{
    id <IESLiveOpenURL> _outerURLOpener;
    IESLiveSchemaParserFactory *_parserFactory;
    NSMutableArray *_parserContainer;
    id <IESLiveCJPayService> _cjpayService;
}

@property(retain, nonatomic) id <IESLiveCJPayService> cjpayService; // @synthesize cjpayService=_cjpayService;
@property(retain, nonatomic) NSMutableArray *parserContainer; // @synthesize parserContainer=_parserContainer;
@property(retain, nonatomic) IESLiveSchemaParserFactory *parserFactory; // @synthesize parserFactory=_parserFactory;
@property(retain, nonatomic) id <IESLiveOpenURL> outerURLOpener; // @synthesize outerURLOpener=_outerURLOpener;
- (void).cxx_destruct;
- (id)getComponentsWithURLString:(id)arg1;
- (_Bool)shouldOpenURLWithCJWebView:(id)arg1;
- (_Bool)canInnerOpenURL:(id)arg1;
- (void)openURL:(id)arg1 fromInside:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 fromInside:(_Bool)arg2;
- (_Bool)canOpenURL:(id)arg1 fromInside:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

