//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/NSCopying-Protocol.h>

@interface TGPhotoPaintEntity : NSObject <NSCopying>
{
    long long _uuid;
    _Bool _mirrored;
    double _angle;
    double _scale;
    struct CGPoint _position;
}

@property(nonatomic, getter=isMirrored) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) long long uuid; // @synthesize uuid=_uuid;
- (id)duplicate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

