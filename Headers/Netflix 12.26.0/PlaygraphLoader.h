//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFPlayerDelegate-Protocol.h>

@class NFPlayerRequest, NSDictionary, NSString;
@protocol PlaygraphLoaderDelegate;

@interface PlaygraphLoader : NSObject <NFPlayerDelegate>
{
    NFPlayerRequest *_request;
    id <PlaygraphLoaderDelegate> _delegate;
    NSDictionary *_playgraph;
}

@property(retain, nonatomic) NSDictionary *playgraph; // @synthesize playgraph=_playgraph;
@property(nonatomic) __weak id <PlaygraphLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NFPlayerRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)loadPlaygraphFromFile:(id)arg1;
- (id)playerViewProviderForPlayer:(id)arg1;
- (void)player:(id)arg1 didUpdatePlaybackPts:(double)arg2;
- (void)player:(id)arg1 didEndItemWithError:(id)arg2;
- (void)player:(id)arg1 didOpenMovieWithChoiceMap:(id)arg2 withExpiration:(id)arg3 andError:(id)arg4;
- (void)player:(id)arg1 didOpenMovieWithError:(id)arg2;
- (id)initWithPlayerRequest:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

