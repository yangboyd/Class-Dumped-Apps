//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@class LiveRoomModel;

@interface IESLiveMTRedEnvelopeApi : HTSLiveApi
{
    LiveRoomModel *_roomModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (id)fetchAllRedEnvelopes;
- (id)initWithRoomModel:(id)arg1;

@end

