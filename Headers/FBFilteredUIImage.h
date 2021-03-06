//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBFilteredUIImage : NSObject
{
    struct Image<facebook::image_processing::RGBA8Pixel> _rgb8image;
    struct FilterConfig _filterConfig;
    struct unique_ptr<facebook::image_processing::FilteredImage, std::__1::default_delete<facebook::image_processing::FilteredImage>> _filteredImage;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _filterParams;
}

+ (id)displayNameForFilter:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearFilter:(id)arg1;
- (id)applyFilter:(id)arg1 withParameters:(id)arg2;
- (id)initWithUIImage:(id)arg1 withFilterConfig:(struct FilterConfig)arg2 withImageMetadata:(id)arg3;

@end

