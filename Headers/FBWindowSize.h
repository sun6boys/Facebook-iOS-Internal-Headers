//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBWindowSize : NSObject
{
    int _orientation;
    struct CGSize _size;
}

+ (void)beginObservingWindowSize;
+ (struct CGSize)size;
+ (id)privateInstance;
+ (void)initialize;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property struct CGSize size; // @synthesize size=_size;
- (void)_didBecomeActive:(id)arg1;
- (void)_willChangeOrientation:(id)arg1;
- (void)_updateSize:(id)arg1;

@end

