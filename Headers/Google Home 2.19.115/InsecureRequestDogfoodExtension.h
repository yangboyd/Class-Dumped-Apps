//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface InsecureRequestDogfoodExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsLocal; // @dynamic hasIsLocal;
@property(nonatomic) _Bool hasIsMedia; // @dynamic hasIsMedia;
@property(nonatomic) _Bool hasIsWebview; // @dynamic hasIsWebview;
@property(nonatomic) _Bool hasRequestURL; // @dynamic hasRequestURL;
@property(nonatomic) _Bool isLocal; // @dynamic isLocal;
@property(nonatomic) _Bool isMedia; // @dynamic isMedia;
@property(nonatomic) _Bool isWebview; // @dynamic isWebview;
@property(copy, nonatomic) NSString *requestURL; // @dynamic requestURL;

@end

