//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GADAPrivateContext, NSString;

@interface GADAApplicationContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URLToContext; // @dynamic URLToContext;
@property(nonatomic) _Bool hasPrivateContext; // @dynamic hasPrivateContext;
@property(retain, nonatomic) GADAPrivateContext *privateContext; // @dynamic privateContext;
@property(copy, nonatomic) NSString *publicDescription; // @dynamic publicDescription;

@end

