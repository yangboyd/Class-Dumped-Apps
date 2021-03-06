//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveMTInteractStreamCanvas, NSArray, NSNumber, NSString;

@interface IESLiveMTInteractionStreamAppData : MTLModel <MTLJSONSerializing>
{
    NSArray *_grids;
    NSString *_vendor;
    NSNumber *_version;
    NSNumber *_lastUpdateAt;
    NSString *_channelID;
    IESLiveMTInteractStreamCanvas *_canvas;
}

+ (id)canvasJSONTransformer;
+ (id)gridsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTInteractStreamCanvas *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) NSNumber *lastUpdateAt; // @synthesize lastUpdateAt=_lastUpdateAt;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *vendor; // @synthesize vendor=_vendor;
@property(retain, nonatomic) NSArray *grids; // @synthesize grids=_grids;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

