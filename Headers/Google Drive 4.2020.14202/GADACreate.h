//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GADACreate_Copy, GADACreate_New, GADACreate_Upload;

@interface GADACreate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GADACreate_Copy *copy_p; // @dynamic copy_p;
@property(retain, nonatomic) GADACreate_New *new_p; // @dynamic new_p;
@property(readonly, nonatomic) int originOneOfCase; // @dynamic originOneOfCase;
@property(retain, nonatomic) GADACreate_Upload *upload; // @dynamic upload;

@end

