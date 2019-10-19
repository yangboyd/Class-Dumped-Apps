//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTArtistAboutImage : NSObject
{
    NSString *_identifier;
    NSURL *_uri;
    NSURL *_moderationUri;
    struct CGSize _size;
}

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSURL *moderationUri; // @synthesize moderationUri=_moderationUri;
@property(readonly, copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

