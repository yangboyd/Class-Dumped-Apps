//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSArray, NSString;

@interface AWENearbyCardModel : MTLModel <MTLJSONSerializing>
{
    unsigned long long _cardType;
    NSString *_objectID;
    NSString *_objectName;
    NSString *_cardHeadText;
    NSString *_cardContentText;
    NSString *_coverLabelText;
    AWEURLModel *_coverUrl;
    NSArray *_avatarList;
    AWEURLModel *_coverLabelUrl;
    long long _coverAwemeID;
    long long _videoWidth;
    long long _videoHeight;
    long long _coverWidth;
    long long _coverHeight;
    double _ratio;
    double _latitude;
    double _longitude;
}

+ (id)coverLabelUrlJSONTransformer;
+ (id)avatarListJSONTransformer;
+ (id)coverUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(nonatomic) long long coverHeight; // @synthesize coverHeight=_coverHeight;
@property(nonatomic) long long coverWidth; // @synthesize coverWidth=_coverWidth;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) long long coverAwemeID; // @synthesize coverAwemeID=_coverAwemeID;
@property(retain, nonatomic) AWEURLModel *coverLabelUrl; // @synthesize coverLabelUrl=_coverLabelUrl;
@property(copy, nonatomic) NSArray *avatarList; // @synthesize avatarList=_avatarList;
@property(retain, nonatomic) AWEURLModel *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *coverLabelText; // @synthesize coverLabelText=_coverLabelText;
@property(copy, nonatomic) NSString *cardContentText; // @synthesize cardContentText=_cardContentText;
@property(copy, nonatomic) NSString *cardHeadText; // @synthesize cardHeadText=_cardHeadText;
@property(copy, nonatomic) NSString *objectName; // @synthesize objectName=_objectName;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

