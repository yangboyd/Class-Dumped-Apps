//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuUUIDStreamItem.h"

@class NSURL;

@interface ASTMenuWebviewStreamItem : ASTMenuUUIDStreamItem
{
    _Bool _userInteractionEnabled;
    NSURL *_url;
    double _height;
}

@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

