//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGPhoto, IGShowreelNativeInfo, IGVideo, NSString;

@interface IGMediaCollectionItem : NSObject <NSCoding, IGListDiffable>
{
    IGPhoto *_photo;
    IGVideo *_video;
    unsigned long long _itemType;
    double _mediaWidth;
    double _mediaHeight;
    NSString *_pk;
    IGShowreelNativeInfo *_igShowreelNativeInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShowreelNativeInfo *igShowreelNativeInfo; // @synthesize igShowreelNativeInfo=_igShowreelNativeInfo;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) double mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(readonly, nonatomic) double mediaWidth; // @synthesize mediaWidth=_mediaWidth;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isVideo;
- (void)updateMediaSize:(struct CGSize)arg1;
- (struct CGSize)mediaSize;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

