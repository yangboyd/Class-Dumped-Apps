//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol FBLoomConfigurationNetworkSourceDelegate;

@protocol FBLoomConfigurationNetworkSource
@property(nonatomic) __weak id <FBLoomConfigurationNetworkSourceDelegate> delegate;
- (void)cancel;
- (void)fetchConfiguration;
- (_Bool)configurationExpired;
- (_Bool)canFetchConfiguration;
@end

