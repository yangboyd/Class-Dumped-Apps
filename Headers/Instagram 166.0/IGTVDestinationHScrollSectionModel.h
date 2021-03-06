//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;
@protocol IGTVChannelDataSourceType;

@interface IGTVDestinationHScrollSectionModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_localPK;
    id <IGTVChannelDataSourceType> _channelDataSource;
    long long _style;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) id <IGTVChannelDataSourceType> channelDataSource; // @synthesize channelDataSource=_channelDataSource;
@property(readonly, copy, nonatomic) NSString *localPK; // @synthesize localPK=_localPK;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithLocalPK:(id)arg1 channelDataSource:(id)arg2 style:(long long)arg3;

@end

