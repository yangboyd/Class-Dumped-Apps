//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface _TtC10RedditCore10VideoAsset : NSObject
{
    // Error parsing type: , name: id
    // Error parsing type: , name: status
    // Error parsing type: , name: mimetype
    // Error parsing type: , name: size
    // Error parsing type: , name: hlsURL
    // Error parsing type: , name: dashURL
    // Error parsing type: , name: isGIF
}

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithGraphQLData:(id)arg1;
- (id)initWithData:(id)arg1;
@property(nonatomic, readonly) _Bool isGIF; // @synthesize isGIF;
@property(nonatomic, readonly) NSURL *dashURL;
@property(nonatomic, readonly) NSURL *hlsURL;
@property(nonatomic, readonly) struct CGSize size; // @synthesize size;
@property(nonatomic, readonly) NSString *mimetype;
@property(nonatomic, readonly) long long status; // @synthesize status;
@property(nonatomic, readonly) NSString *id;

@end

