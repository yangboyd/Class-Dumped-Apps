//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack33SLKUserDefaultsChannelPermissions : NSObject
{
    // Error parsing type: , name: ReadOnlyChannelsDefaultsKey
    // Error parsing type: , name: ThreadOnlyChannelsDefaultsKey
    // Error parsing type: , name: NonThreadableChannelsDefaultsKey
    // Error parsing type: , name: permissionStore
    // Error parsing type: , name: notificationCenter
}

- (void).cxx_destruct;
- (id)init;
- (id)channelsWithNoPostingPermissions;
- (_Bool)canThreadInChannel:(id)arg1;
- (_Bool)canPostInChannel:(id)arg1;
- (void)makeChannelWriteable:(id)arg1;
- (void)makeChannelNonThreadable:(id)arg1;
- (void)updateNonThreadableChannels:(id)arg1;
- (void)makeChannelThreadOnly:(id)arg1;
- (void)updateThreadOnlyChannels:(id)arg1;
- (void)makeChannelReadOnly:(id)arg1;
- (void)updateReadOnlyChannels:(id)arg1;
- (id)initWithDependencies:(id)arg1;

@end

