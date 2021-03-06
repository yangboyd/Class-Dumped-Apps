//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuUUIDStreamItem.h"

@class NSURL, UIColor;

@interface ASTMenuWebviewStreamItem : ASTMenuUUIDStreamItem
{
    _Bool _userInteractionEnabled;
    NSURL *_url;
    double _height;
    UIColor *_backgroundColor;
    double _leftMargin;
    double _rightMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

