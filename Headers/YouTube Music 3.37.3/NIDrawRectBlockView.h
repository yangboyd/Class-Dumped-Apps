//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITableViewCell;

@interface NIDrawRectBlockView : UIView
{
    CDUnknownBlockType _block;
    id _object;
    UITableViewCell *_cell;
}

@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

