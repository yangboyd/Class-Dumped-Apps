//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class A9VSFezRoom, A9VSFezRoomManager, NSDate, UIImage;

@interface A9VSFezRoomCellItem : NSObject
{
    _Bool _isSelected;
    _Bool _isInteractionEnabled;
    A9VSFezRoom *_room;
    NSDate *_updateDate;
    UIImage *_thumbnail;
    A9VSFezRoomManager *_roomManager;
}

@property(retain, nonatomic) A9VSFezRoomManager *roomManager; // @synthesize roomManager=_roomManager;
@property(nonatomic) _Bool isInteractionEnabled; // @synthesize isInteractionEnabled=_isInteractionEnabled;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(nonatomic) __weak A9VSFezRoom *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (void)fetchRoomThumbnailWithMaxSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)timestampString;
- (id)initWithRoom:(id)arg1 andRoomManager:(id)arg2;

@end

