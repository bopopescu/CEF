# Copyright (c) 2012 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
  'variables': {
    'chromium_code': 1,
    'cc_unit_tests_source_files': [
      'animation/animation_host_unittest.cc',
      'animation/animation_player_unittest.cc',
      'animation/animation_timeline_unittest.cc',
      'animation/animation_unittest.cc',
      'animation/element_animations_unittest.cc',
      'animation/keyframed_animation_curve_unittest.cc',
      'animation/layer_animation_controller_unittest.cc',
      'animation/scroll_offset_animation_curve_unittest.cc',
      'animation/scrollbar_animation_controller_linear_fade_unittest.cc',
      'animation/scrollbar_animation_controller_thinning_unittest.cc',
      'animation/transform_operations_unittest.cc',
      'base/contiguous_container_unittest.cc',
      'base/delayed_unique_notifier_unittest.cc',
      'base/float_quad_unittest.cc',
      'base/histograms_unittest.cc',
      'base/list_container_unittest.cc',
      'base/math_util_unittest.cc',
      'base/random_access_list_container_unittest.cc',
      'base/region_unittest.cc',
      'base/rolling_time_delta_history_unittest.cc',
      'base/rtree_unittest.cc',
      'base/simple_enclosed_region_unittest.cc',
      'base/tiling_data_unittest.cc',
      'base/unique_notifier_unittest.cc',
      'debug/frame_timing_tracker_unittest.cc',
      'debug/layer_tree_debug_state_unittest.cc',
      'debug/micro_benchmark_controller_unittest.cc',
      'debug/rendering_stats_unittest.cc',
      'input/layer_selection_bound_unittest.cc',
      'input/scroll_state_unittest.cc',
      'input/top_controls_manager_unittest.cc',
      'layers/delegated_frame_provider_unittest.cc',
      'layers/delegated_frame_resource_collection_unittest.cc',
      'layers/delegated_renderer_layer_impl_unittest.cc',
      'layers/delegated_renderer_layer_unittest.cc',
      'layers/heads_up_display_layer_impl_unittest.cc',
      'layers/heads_up_display_unittest.cc',
      'layers/io_surface_layer_impl_unittest.cc',
      'layers/layer_impl_unittest.cc',
      'layers/layer_iterator_unittest.cc',
      'layers/layer_position_constraint_unittest.cc',
      'layers/layer_proto_converter_unittest.cc',
      'layers/layer_unittest.cc',
      'layers/layer_utils_unittest.cc',
      'layers/nine_patch_layer_impl_unittest.cc',
      'layers/nine_patch_layer_unittest.cc',
      'layers/painted_scrollbar_layer_impl_unittest.cc',
      'layers/painted_scrollbar_layer_unittest.cc',
      'layers/picture_image_layer_impl_unittest.cc',
      'layers/picture_image_layer_unittest.cc',
      'layers/picture_layer_impl_unittest.cc',
      'layers/picture_layer_unittest.cc',
      'layers/render_surface_impl_unittest.cc',
      'layers/render_surface_unittest.cc',
      'layers/scrollbar_layer_unittest.cc',
      'layers/solid_color_layer_impl_unittest.cc',
      'layers/solid_color_scrollbar_layer_impl_unittest.cc',
      'layers/surface_layer_impl_unittest.cc',
      'layers/surface_layer_unittest.cc',
      'layers/texture_layer_impl_unittest.cc',
      'layers/texture_layer_unittest.cc',
      'layers/ui_resource_layer_impl_unittest.cc',
      'layers/ui_resource_layer_unittest.cc',
      'layers/video_frame_provider_client_impl_unittest.cc',
      'layers/video_layer_impl_unittest.cc',
      'output/begin_frame_args_unittest.cc',
      'output/bsp_tree_unittest.cc',
      'output/delegating_renderer_unittest.cc',
      'output/filter_operations_unittest.cc',
      'output/gl_renderer_unittest.cc',
      'output/layer_quad_unittest.cc',
      'output/managed_memory_policy_unittest.cc',
      'output/output_surface_unittest.cc',
      'output/overlay_unittest.cc',
      'output/renderer_pixeltest.cc',
      'output/renderer_settings_unittest.cc',
      'output/renderer_unittest.cc',
      'output/shader_unittest.cc',
      'output/software_renderer_unittest.cc',
      'output/texture_mailbox_deleter_unittest.cc',
      'playback/discardable_image_map_unittest.cc',
      'playback/display_item_list_unittest.cc',
      'playback/display_list_raster_source_unittest.cc',
      'playback/display_list_recording_source_unittest.cc',
      'proto/base_conversions_unittest.cc',
      'proto/cc_conversions_unittest.cc',
      'proto/gfx_conversions_unittest.cc',
      'proto/gpu_conversions_unittest.cc',
      'proto/skia_conversions_unittest.cc',
      'quads/draw_polygon_unittest.cc',
      'quads/draw_quad_unittest.cc',
      'quads/render_pass_unittest.cc',
      'raster/scoped_gpu_raster_unittest.cc',
      'raster/single_thread_task_graph_runner_unittest.cc',
      'raster/synchronous_task_graph_runner_unittest.cc',
      'raster/texture_compressor_etc1_unittest.cc',
      'raster/tile_task_worker_pool_unittest.cc',
      'resources/platform_color_unittest.cc',
      'resources/resource_pool_unittest.cc',
      'resources/resource_provider_unittest.cc',
      'resources/resource_util_unittest.cc',
      'resources/scoped_resource_unittest.cc',
      'resources/video_resource_updater_unittest.cc',
      'scheduler/begin_frame_source_unittest.cc',
      'scheduler/commit_earlyout_reason_unittest.cc',
      'scheduler/compositor_timing_history_unittest.cc',
      'scheduler/delay_based_time_source_unittest.cc',
      'scheduler/scheduler_state_machine_unittest.cc',
      'scheduler/scheduler_unittest.cc',
      'test/begin_frame_source_test_unittest.cc',
      'test/layer_tree_json_parser_unittest.cc',
      'test/mock_helper_unittest.cc',
      'test/ordered_simple_task_runner_unittest.cc',
      'test/test_web_graphics_context_3d_unittest.cc',
      'tiles/image_decode_controller_unittest.cc',
      'tiles/picture_layer_tiling_set_unittest.cc',
      'tiles/picture_layer_tiling_unittest.cc',
      'tiles/tile_manager_unittest.cc',
      'tiles/tile_priority_unittest.cc',
      'trees/blocking_task_runner_unittest.cc',
      'trees/damage_tracker_unittest.cc',
      'trees/layer_tree_host_common_unittest.cc',
      'trees/layer_tree_host_impl_unittest.cc',
      'trees/layer_tree_host_pixeltest_blending.cc',
      'trees/layer_tree_host_pixeltest_filters.cc',
      'trees/layer_tree_host_pixeltest_masks.cc',
      'trees/layer_tree_host_pixeltest_readback.cc',
      'trees/layer_tree_host_pixeltest_synchronous.cc',
      'trees/layer_tree_host_pixeltest_tiles.cc',
      'trees/layer_tree_host_unittest.cc',
      'trees/layer_tree_host_unittest_animation.cc',
      'trees/layer_tree_host_unittest_animation_timelines.cc',
      'trees/layer_tree_host_unittest_context.cc',
      'trees/layer_tree_host_unittest_copyrequest.cc',
      'trees/layer_tree_host_unittest_damage.cc',
      'trees/layer_tree_host_unittest_delegated.cc',
      'trees/layer_tree_host_unittest_occlusion.cc',
      'trees/layer_tree_host_unittest_picture.cc',
      'trees/layer_tree_host_unittest_proxy.cc',
      'trees/layer_tree_host_unittest_record_gpu_histogram.cc',
      'trees/layer_tree_host_unittest_remote_server.cc',
      'trees/layer_tree_host_unittest_scroll.cc',
      'trees/layer_tree_host_unittest_serialization.cc',
      'trees/layer_tree_host_unittest_video.cc',
      'trees/layer_tree_impl_unittest.cc',
      'trees/layer_tree_settings_unittest.cc',
      'trees/occlusion_tracker_unittest.cc',
      'trees/occlusion_unittest.cc',
      'trees/property_tree_unittest.cc',
      'trees/proxy_common_unittest.cc',
      'trees/proxy_impl_unittest.cc',
      'trees/remote_channel_unittest.cc',
      'trees/threaded_channel_unittest.cc',
      'trees/tree_synchronizer_unittest.cc',
    ],
    'cc_surfaces_unit_tests_source_files': [
      'surfaces/display_unittest.cc',
      'surfaces/display_scheduler_unittest.cc',
      'surfaces/surface_aggregator_unittest.cc',
      'surfaces/surface_display_output_surface_unittest.cc',
      'surfaces/surface_factory_unittest.cc',
      'surfaces/surface_hittest_unittest.cc',
      'surfaces/surface_unittest.cc',
      'surfaces/surfaces_pixeltest.cc',
    ],
    'cc_tests_support_files': [
      'test/animation_test_common.cc',
      'test/animation_test_common.h',
      'test/animation_timelines_test_common.cc',
      'test/animation_timelines_test_common.h',
      'test/begin_frame_args_test.cc',
      'test/begin_frame_args_test.h',
      'test/begin_frame_source_test.cc',
      'test/begin_frame_source_test.h',
      'test/failure_output_surface.cc',
      'test/failure_output_surface.h',
      'test/fake_channel_impl.cc',
      'test/fake_channel_impl.h',
      'test/fake_content_layer_client.cc',
      'test/fake_content_layer_client.h',
      'test/fake_delegated_renderer_layer.cc',
      'test/fake_delegated_renderer_layer.h',
      'test/fake_delegated_renderer_layer_impl.cc',
      'test/fake_delegated_renderer_layer_impl.h',
      'test/fake_display_list_raster_source.cc',
      'test/fake_display_list_raster_source.h',
      'test/fake_display_list_recording_source.cc',
      'test/fake_display_list_recording_source.h',
      'test/fake_external_begin_frame_source.cc',
      'test/fake_external_begin_frame_source.h',
      'test/fake_impl_task_runner_provider.h',
      'test/fake_layer_tree_host.cc',
      'test/fake_layer_tree_host.h',
      'test/fake_layer_tree_host_client.cc',
      'test/fake_layer_tree_host_client.h',
      'test/fake_layer_tree_host_impl.cc',
      'test/fake_layer_tree_host_impl.h',
      'test/fake_layer_tree_host_impl_client.cc',
      'test/fake_layer_tree_host_impl_client.h',
      'test/fake_mask_layer_impl.cc',
      'test/fake_mask_layer_impl.h',
      'test/fake_output_surface.cc',
      'test/fake_output_surface.h',
      'test/fake_output_surface_client.cc',
      'test/fake_output_surface_client.h',
      'test/fake_painted_scrollbar_layer.cc',
      'test/fake_painted_scrollbar_layer.h',
      'test/fake_picture_layer.cc',
      'test/fake_picture_layer.h',
      'test/fake_picture_layer_impl.cc',
      'test/fake_picture_layer_impl.h',
      'test/fake_picture_layer_tiling_client.cc',
      'test/fake_picture_layer_tiling_client.h',
      'test/fake_proxy.cc',
      'test/fake_proxy.h',
      'test/fake_renderer_client.cc',
      'test/fake_renderer_client.h',
      'test/fake_rendering_stats_instrumentation.h',
      'test/fake_resource_provider.h',
      'test/fake_scoped_ui_resource.cc',
      'test/fake_scoped_ui_resource.h',
      'test/fake_scrollbar.cc',
      'test/fake_scrollbar.h',
      'test/fake_tile_manager.cc',
      'test/fake_tile_manager.h',
      'test/fake_tile_manager_client.cc',
      'test/fake_tile_manager_client.h',
      'test/fake_ui_resource_layer_tree_host_impl.cc',
      'test/fake_ui_resource_layer_tree_host_impl.h',
      'test/fake_video_frame_provider.cc',
      'test/fake_video_frame_provider.h',
      'test/geometry_test_utils.cc',
      'test/geometry_test_utils.h',
      'test/layer_test_common.cc',
      'test/layer_test_common.h',
      'test/layer_tree_host_common_test.cc',
      'test/layer_tree_host_common_test.h',
      'test/layer_tree_json_parser.cc',
      'test/layer_tree_json_parser.h',
      'test/layer_tree_pixel_resource_test.cc',
      'test/layer_tree_pixel_resource_test.h',
      'test/layer_tree_pixel_test.cc',
      'test/layer_tree_pixel_test.h',
      'test/layer_tree_settings_for_testing.cc',
      'test/layer_tree_settings_for_testing.h',
      'test/layer_tree_test.cc',
      'test/layer_tree_test.h',
      'test/mock_helper.h',
      'test/mock_occlusion_tracker.h',
      'test/ordered_simple_task_runner.cc',
      'test/ordered_simple_task_runner.h',
      'test/ordered_texture_map.cc',
      'test/ordered_texture_map.h',
      'test/paths.cc',
      'test/paths.h',
      'test/pixel_comparator.cc',
      'test/pixel_comparator.h',
      'test/pixel_test.cc',
      'test/pixel_test.h',
      'test/pixel_test_output_surface.cc',
      'test/pixel_test_output_surface.h',
      'test/pixel_test_software_output_device.cc',
      'test/pixel_test_software_output_device.h',
      'test/pixel_test_utils.cc',
      'test/pixel_test_utils.h',
      'test/proxy_impl_for_test.cc',
      'test/proxy_impl_for_test.h',
      'test/proxy_main_for_test.cc',
      'test/proxy_main_for_test.h',
      'test/remote_channel_impl_for_test.cc',
      'test/remote_channel_impl_for_test.h',
      'test/remote_proto_channel_bridge.cc',
      'test/remote_proto_channel_bridge.h',
      'test/render_pass_test_utils.cc',
      'test/render_pass_test_utils.h',
      'test/scheduler_test_common.cc',
      'test/scheduler_test_common.h',
      'test/skia_common.cc',
      'test/skia_common.h',
      'test/solid_color_content_layer_client.cc',
      'test/solid_color_content_layer_client.h',
      'test/surface_aggregator_test_helpers.cc',
      'test/surface_aggregator_test_helpers.h',
      'test/surface_hittest_test_helpers.cc',
      'test/surface_hittest_test_helpers.h',
      'test/task_graph_runner_test_template.cc',
      'test/task_graph_runner_test_template.h',
      'test/test_context_provider.cc',
      'test/test_context_provider.h',
      'test/test_context_support.cc',
      'test/test_context_support.h',
      'test/test_gles2_interface.cc',
      'test/test_gles2_interface.h',
      'test/test_gpu_memory_buffer_manager.cc',
      'test/test_gpu_memory_buffer_manager.h',
      'test/test_hooks.cc',
      'test/test_hooks.h',
      'test/test_image_factory.cc',
      'test/test_image_factory.h',
      'test/test_in_process_context_provider.cc',
      'test/test_in_process_context_provider.h',
      'test/test_occlusion_tracker.h',
      'test/test_shared_bitmap_manager.cc',
      'test/test_shared_bitmap_manager.h',
      'test/test_task_graph_runner.cc',
      'test/test_task_graph_runner.h',
      'test/test_texture.cc',
      'test/test_texture.h',
      'test/test_tile_priorities.cc',
      'test/test_tile_priorities.h',
      'test/test_web_graphics_context_3d.cc',
      'test/test_web_graphics_context_3d.h',
      'test/threaded_channel_for_test.cc',
      'test/threaded_channel_for_test.h',
    ],
  },
  'targets': [
    {
      'target_name': 'cc_unittests',
      'type': '<(gtest_target_type)',
      'dependencies': [
        '../base/base.gyp:test_support_base',
        '../gpu/command_buffer/command_buffer.gyp:gles2_utils',
        '../gpu/gpu.gyp:gpu',
        '../gpu/gpu.gyp:gpu_unittest_utils',
        '../media/media.gyp:media',
        '../skia/skia.gyp:skia',
        '../testing/gmock.gyp:gmock',
        '../testing/gtest.gyp:gtest',
        '../third_party/protobuf/protobuf.gyp:protobuf_lite',
        '../ui/events/events.gyp:events_base',
        '../ui/gfx/gfx.gyp:gfx',
        '../ui/gfx/gfx.gyp:gfx_geometry',
        'cc.gyp:cc',
        'cc.gyp:cc_proto',
        'cc.gyp:cc_surfaces',
        'cc_test_support',
      ],
      'sources': [
        'test/cc_test_suite.cc',
        'test/run_all_unittests.cc',
        '<@(cc_unit_tests_source_files)',
        '<@(cc_surfaces_unit_tests_source_files)',
      ],
      'conditions': [
        ['OS == "android"',
          {
            'dependencies': [
              '../testing/android/native_test.gyp:native_test_native_code',
            ],
          }
        ],
      ],
    },
    {
      # GN version: //cc/cc_perftests
      'target_name': 'cc_perftests',
      'type': '<(gtest_target_type)',
      'dependencies': [
        '../base/base.gyp:test_support_base',
        '../gpu/command_buffer/command_buffer.gyp:gles2_utils',
        '../gpu/gpu.gyp:gpu',
        '../gpu/gpu.gyp:gpu_unittest_utils',
        '../media/media.gyp:media',
        '../skia/skia.gyp:skia',
        '../testing/gmock.gyp:gmock',
        '../testing/gtest.gyp:gtest',
        '../testing/perf/perf_test.gyp:*',
        '../ui/gfx/gfx.gyp:gfx',
        '../ui/gfx/gfx.gyp:gfx_geometry',
        'cc.gyp:cc',
        'cc.gyp:cc_surfaces',
        'cc_test_support',
      ],
      'sources': [
        # Note: sources list duplicated in GN build.
        'layers/layer_perftest.cc',
        'layers/picture_layer_impl_perftest.cc',
        'quads/draw_quad_perftest.cc',
        'raster/task_graph_runner_perftest.cc',
        'raster/texture_compressor_perftest.cc',
        'raster/tile_task_worker_pool_perftest.cc',
        'surfaces/surface_aggregator_perftest.cc',
        'test/cc_test_suite.cc',
        'test/run_all_perftests.cc',
        'tiles/picture_layer_tiling_perftest.cc',
        'tiles/tile_manager_perftest.cc',
        'trees/layer_tree_host_common_perftest.cc',
        'trees/layer_tree_host_perftest.cc',
        'trees/occlusion_tracker_perftest.cc',
      ],
      'conditions': [
        ['OS == "android"',
          {
            'dependencies': [
              '../testing/android/native_test.gyp:native_test_native_code',
            ],
          }
        ],
      ],
    },
    {
      'target_name': 'cc_test_support',
      'type': 'static_library',
      'dependencies': [
        '../base/base.gyp:base',
        '../base/third_party/dynamic_annotations/dynamic_annotations.gyp:dynamic_annotations',
        '../gpu/command_buffer/command_buffer.gyp:gles2_utils',
        '../gpu/gpu.gyp:gles2_c_lib',
        '../gpu/gpu.gyp:gles2_implementation',
        '../gpu/gpu.gyp:gl_in_process_context',
        '../gpu/gpu.gyp:gpu',
        '../gpu/gpu.gyp:gpu_unittest_utils',
        '../gpu/skia_bindings/skia_bindings.gyp:gpu_skia_bindings',
        '../skia/skia.gyp:skia',
        '../testing/gmock.gyp:gmock',
        '../testing/gtest.gyp:gtest',
        '../third_party/mesa/mesa.gyp:osmesa',
        '../ui/gfx/gfx.gyp:gfx',
        '../ui/gfx/gfx.gyp:gfx_geometry',
        '../ui/gfx/gfx.gyp:gfx_test_support',
        '../ui/gl/gl.gyp:gl',
        '../ui/gl/gl.gyp:gl_test_support',
        'cc.gyp:cc_proto',
      ],
      'sources': [
        '<@(cc_tests_support_files)',
      ],
    },
  ],
  'conditions': [
    ['OS == "android"',
      {
        'targets': [
          {
            'target_name': 'cc_unittests_apk',
            'type': 'none',
            'dependencies': [
              'cc_unittests',
            ],
            'variables': {
              'test_suite_name': 'cc_unittests',
            },
            'includes': [ '../build/apk_test.gypi' ],
          },
          {
            'target_name': 'cc_perftests_apk',
            'type': 'none',
            'dependencies': [
              'cc_perftests',
            ],
            'variables': {
              'test_suite_name': 'cc_perftests',
            },
            'includes': [ '../build/apk_test.gypi' ],
          },
        ],
      }
    ],
    ['test_isolation_mode != "noop"', {
      'targets': [
        {
          'target_name': 'cc_unittests_run',
          'type': 'none',
          'dependencies': [
            'cc_unittests',
          ],
          'includes': [
            '../build/isolate.gypi',
          ],
          'sources': [
            'cc_unittests.isolate',
          ],
          'conditions': [
            # crbug.com/464062 xdisplaycheck is used to run cc_unittests_run on
            # the linux try bots when using X11.
            ['use_x11==1',
              {
                'dependencies': [
                  '../tools/xdisplaycheck/xdisplaycheck.gyp:xdisplaycheck',
                ],
              }
            ],
          ],
        },
      ],
    }],
  ],
}
