//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTCCLClientOp-Protocol.h"

@class NSArray, NSString;
@protocol ASTCCLProcessor, ASTMediaPlayerService;

@interface ASTCCLMediaPlayMediaClientOp : NSObject <ASTCCLClientOp>
{
    id <ASTCCLProcessor> _cclProcessor;
    id <ASTMediaPlayerService> _mediaPlayerService;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ASTMediaPlayerService> mediaPlayerService; // @synthesize mediaPlayerService=_mediaPlayerService;
@property(nonatomic) __weak id <ASTCCLProcessor> cclProcessor; // @synthesize cclProcessor=_cclProcessor;
- (id)parseQuery:(id)arg1 to:(id)arg2;
- (void)playMediaFromUniversalLink:(id)arg1 forAppInfo:(id)arg2;
- (id)parseEpisodeDataArray:(id)arg1 withShowData:(id)arg2;
- (id)parseMediaItemArray:(id)arg1;
- (id)playMediaProperties;
- (void)performClientOperation:(id)arg1 interactionID:(int)arg2 deviceSpecificRendering:(id)arg3 statusCallback:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSArray *supportedClientOps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

