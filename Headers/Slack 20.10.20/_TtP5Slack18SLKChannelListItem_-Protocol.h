//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, SLKDependencies, _TtC5Slack19SKIconConfiguration;

@protocol _TtP5Slack18SLKChannelListItem_ <NSObject>
- (_Bool)isSelectedWithDependencies:(SLKDependencies *)arg1;
- (long long)readChannelSortKey;
- (long long)badgeCount;
- (_Bool)hasUnreads;
- (_Bool)shouldHideSecondaryLabel;
- (id)rowData;
- (_TtC5Slack19SKIconConfiguration *)sharedChannelSymbol;
- (_TtC5Slack19SKIconConfiguration *)iconConfigurationWithDependencies:(SLKDependencies *)arg1;
- (NSString *)secondaryTextWithDependencies:(SLKDependencies *)arg1;
- (NSString *)textWithDependencies:(SLKDependencies *)arg1;
- (NSString *)listItemIdentifier;
@property(nonatomic, readonly) _Bool supportsChannelSwitchMetric;
@property(nonatomic, readonly) NSAttributedString *attributedText;
@end

